/* Interval between signal changes */
const int SIGNAL_SAMPLING_INTERVAL = 20;

/* Rate of signal change */
const int SIGNAL_SAMPLING_FREQUENCY = 60;

/* Interval between signal reads */
const int READING_INTERVAL = 200;

/* Interval between two votes */
const int VOTING_INTERVAL = 200;

/* Voter window size */
const int VOTING_WINDOW = 1;

/* Reader parameters */
typedef struct {
	int offset;
	int drift;
	int jitter;

	float error_rate;
	float error_value;
	
	int id;
} reader_parameters_t;

reader_parameters_t reader_parameters[] = {
/* Normal task configuration */
{.offset=  0, .drift=  0, .jitter=  0},
{.offset=  0, .drift=  0, .jitter=  0},
//{.offset=  0, .drift=  0, .jitter=  0}

/* Transient fault */
{.offset=  0, .drift=  0, .jitter=  0, .error_rate=0.5, .error_value=0.}
//{.offset=  0, .drift=  0, .jitter=  0, .error_rate=0.3, .error_value=0.}

/* Permanent fault */
/*{.offset=  0, .drift=  0, .jitter=  0, .error_rate=1.0, .error_value=0.5, /**/

/* Duplex system */
/*{.offset=  0, .drift=  0, .jitter=  0},
{.offset=  0, .drift=  0, .jitter=  0}, /**/

/* Offset/Delayed task release */
/*{.offset=  250, .drift=  0, .jitter=  0}, /**/

/* Jitter in the task release */
/*{.offset=  0, .drift=  0, .jitter=  400}, /**/

/* Drift in the task clock, i.e. increasing release delay */
/*{.offset=  0, .drift=  500, .jitter=  0}, /**/

};

/* Current number of readers */
const int NUM_READERS = sizeof(reader_parameters) / sizeof(reader_parameters_t);
