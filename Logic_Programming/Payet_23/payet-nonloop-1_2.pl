% The following mode is non-terminating.
%query: p(i,i,i,i).

p(s(_), X, [], Y) :-
    p(s(0), g(X, h(0), X), g(X, h(0), X), Y).

p(Z, X, g(Y, h(0), Y), s(_)) :-
    p(Z, X, Y, s(s(0))).