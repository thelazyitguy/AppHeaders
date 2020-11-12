//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AMWServiceResponse : NSObject
{
    NSDictionary *_serviceAssignments;
    NSDictionary *_invalidWeblabs;
    double _timeToLive;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double timeToLive; // @synthesize timeToLive=_timeToLive;
@property(retain, nonatomic) NSDictionary *invalidWeblabs; // @synthesize invalidWeblabs=_invalidWeblabs;
@property(retain, nonatomic) NSDictionary *serviceAssignments; // @synthesize serviceAssignments=_serviceAssignments;
- (void).cxx_destruct;
- (double)getCacheControlValue:(id)arg1;
- (_Bool)checkIfInvalidMayTrigger:(id)arg1;
- (id)initWithResponse:(id)arg1 payload:(id)arg2;
- (id)initWithResponse:(id)arg1 payload:(id)arg2 andStatus:(long long)arg3;
- (id)initWithResponse:(id)arg1 andStatus:(long long)arg2;

@end
