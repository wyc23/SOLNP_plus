function [f,constraint, count,t,s] = P28(op,rep)
%% P28
prob.p0 = [-4,1,1]'; %+ 1e-4*randn(3,1);
%  op.tol = 1e-3;
%  op.min_iter = 3;
%  op.tol_con = 1e-3;
% %  op.ls_time = 5;
% op.re_time = 0;op.ls_time = 1000;op.noise = 0;rng(1);
% rep = 50;
f = 0;
constraint = 0;
count = 0;t = 0;
s = 0;rng(1);
for i = 1:rep   
    t1 = tic;
    info= SOLNP_plus(prob,op);
    t = t + toc(t1);
    if info.constraint<= 1e-3 
        s = s +1;
        f = f +  info.obj;
        constraint = constraint + info.constraint;
        count = count + info.count_cost;
    end
   
    clear cost
end
t = t/rep;
f = f/s;
count = count/s;
constraint = constraint/s;
fprintf("f average = %e, con = %e,count = %f,time = %e\n",f,constraint,count,t);
%cost(info.p,inf);
end