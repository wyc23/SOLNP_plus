
% This program minimize the Rosenbrock function in a box 
clear
clear cost

prob.p0 = zeros(2,1);% + 1e-5*randn(3,1);
prob.pbl = -1*ones(2,1);
prob.pbu = 2*ones(2,1);
op.tol = 1e-4;
op.tol_con = 1e-4; 
op.min_iter = 10;

info = SOLNP_plus(prob,op);
cost(info.p,inf);