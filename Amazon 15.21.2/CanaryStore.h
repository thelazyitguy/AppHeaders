//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CanaryStore : NSObject
{
}

+ (id)getCurrentDay;
+ (void)setInt:(id)arg1 forKey:(id)arg2;
+ (id)getInt:(id)arg1 withDefaultValue:(id)arg2;
+ (id)getCountOfExecutionsDoneToday:(id)arg1 withCountKey:(id)arg2;
+ (void)incrementExperimentCountForToday:(id)arg1;
+ (void)incrementAllExperimentsCountForToday;
+ (id)getExperimentCountToday:(id)arg1;
+ (id)getAllExperimentsCountToday;
+ (void)incrementExecutionCountForToday:(id)arg1;

@end
