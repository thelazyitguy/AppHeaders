//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSKSReachability;

@interface AWSKSReachableOperation : NSObject
{
    AWSKSReachability *_reachability;
}

+ (id)operationWithReachability:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
+ (id)operationWithHost:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) AWSKSReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReachability:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
- (id)initWithHost:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;

@end

