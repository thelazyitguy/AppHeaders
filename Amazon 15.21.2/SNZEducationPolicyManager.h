//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface SNZEducationPolicyManager : NSObject
{
    NSUserDefaults *_standardUserDefaults;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSUserDefaults *standardUserDefaults; // @synthesize standardUserDefaults=_standardUserDefaults;
- (void).cxx_destruct;
- (void)saveDisplayAttempt:(unsigned long long)arg1;
- (void)saveAttemptDate:(id)arg1;
- (void)saveDisplayDate:(id)arg1;
- (void)saveAttemptInfoForExperiment;
- (_Bool)shouldDisplayOnAttempt:(unsigned long long)arg1 forAttemptThreshold:(unsigned long long)arg2;
- (_Bool)shouldAttemptExperimentForSuppressionPeriod:(unsigned long long)arg1;
- (_Bool)preconditionsForAdvancedEducationalTooltipExperiment;
- (_Bool)shouldShowExperimentWithSuppressionPeriodInDays:(unsigned long long)arg1 attemptThreshold:(unsigned long long)arg2;
- (_Bool)isAdvancedEducationalTooltipExperimentEnabled;
- (void)attemptToShowAdvancedEducationalTooltipExperiment;
- (id)initWithUserDefaults:(id)arg1;

@end

