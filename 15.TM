Automaton Simulator, v1.0
turing {
	alphabet {abcd*_}
	state {
		initial {yes}
		coord {253 354}
	}
	state {
		coord {582 341}
	}
	state {
		coord {820 360}
	}
	state {
		coord {254 617}
	}
	state {
		final {yes}
		coord {542 632}
	}
	edge 0 1 {
		transits {a}
		offset {0.5235987755982988}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {a}
		offset {1.6035714711989726}
		direction {R}
		output {a}
	}
	edge 1 2 {
		transits {b}
		offset {0.5235987755982988}
		direction {L}
		output {d}
	}
	edge 2 2 {
		transits {a}
		offset {1.4056476493802699}
		direction {L}
		output {a}
	}
	edge 2 0 {
		transits {c}
		offset {0.597615809259759}
		direction {R}
		output {c}
	}
	edge 1 1 {
		transits {d}
		offset {-1.800028260071892}
		direction {R}
		output {d}
	}
	edge 2 2 {
		transits {d}
		offset {-1.3149877621795247}
		direction {L}
		output {d}
	}
	edge 0 3 {
		transits {d}
		offset {0.5235987755982988}
		direction {R}
		output {d}
	}
	edge 3 4 {
		transits {_}
		offset {0.5235987755982988}
		direction {L}
		output {_}
	}
	edge 3 3 {
		transits {d}
		offset {-2.6868733787688237}
		direction {R}
		output {d}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {439 572}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {411 571}
	}
	label {
		text {}
		font {SansSerif 12 -}
		coord {279 142}
	}
}
