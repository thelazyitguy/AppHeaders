//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CMRDay1OnboardingViewState : NSObject
{
    NSString *_configuration;
    NSString *_setupCompleteImageName;
    NSString *_flowId;
    NSString *_updateStatus;
    NSNumber *_remainingUpdateMinutes;
    NSNumber *_updateProgress;
}

+ (id)Day1OnboardingViewStateWithConfiguration:(id)arg1 setupCompleteImageName:(id)arg2 flowId:(id)arg3 updateStatus:(id)arg4 remainingUpdateMinutes:(id)arg5 updateProgress:(id)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *updateProgress; // @synthesize updateProgress=_updateProgress;
@property(readonly, nonatomic) NSNumber *remainingUpdateMinutes; // @synthesize remainingUpdateMinutes=_remainingUpdateMinutes;
@property(readonly, nonatomic) NSString *updateStatus; // @synthesize updateStatus=_updateStatus;
@property(readonly, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(readonly, nonatomic) NSString *setupCompleteImageName; // @synthesize setupCompleteImageName=_setupCompleteImageName;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 setupCompleteImageName:(id)arg2 flowId:(id)arg3 updateStatus:(id)arg4 remainingUpdateMinutes:(id)arg5 updateProgress:(id)arg6;

@end

