//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@interface TNLNetwork
{
}

+ (void)applyBackoffDependenciesToOperation:(id)arg1 withURL:(id)arg2 host:(id)arg3 isLongPollRequest:(_Bool)arg4;
+ (void)HTTPURLResponseEncounteredOutsideOfTNL:(id)arg1 host:(id)arg2;
+ (void)backoffSignalEncounteredForURL:(id)arg1 host:(id)arg2 responseHTTPHeaders:(id)arg3;
+ (void)decrementExecutingNetworkConnections;
+ (void)incrementExecutingNetworkConnections;
+ (_Bool)hasExecutingNetworkConnections;

@end
