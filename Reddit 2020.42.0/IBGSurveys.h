//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IBGSurveys : NSObject
{
}

+ (void)setThresholdForReshowingSurveyAfterDismiss:(long long)arg1 daysCount:(long long)arg2;
+ (_Bool)hasRespondedToSurveyWithToken:(id)arg1;
+ (void)showSurveyWithToken:(id)arg1;
+ (void)showSurveyIfAvailable;
+ (void)setDidDismissSurveyHandler:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)didDismissSurveyHandler;
+ (void)setWillShowSurveyHandler:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)willShowSurveyHandler;
+ (id)availableSurveys;
+ (void)setShouldShowWelcomeScreen:(_Bool)arg1;
+ (_Bool)shouldShowWelcomeScreen;
+ (void)setAutoShowingEnabled:(_Bool)arg1;
+ (_Bool)autoShowingEnabled;
+ (void)setEnabled:(_Bool)arg1;
+ (_Bool)enabled;

@end
