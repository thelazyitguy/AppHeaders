//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSModelsCommonIntegrationCustomerPolicies_ServicesEnabled_Builder.h"

@class JavaLangBoolean;

@interface DYNSModelsCommonAutoValue_IntegrationCustomerPolicies_ServicesEnabled_Builder : DYNSModelsCommonIntegrationCustomerPolicies_ServicesEnabled_Builder
{
    JavaLangBoolean *tasksEnabled_;
    JavaLangBoolean *calendarEnabled_;
    JavaLangBoolean *gmailEnabled_;
}

- (void)dealloc;
- (id)build;
- (id)setGmailEnabledWithBoolean:(_Bool)arg1;
- (id)setCalendarEnabledWithBoolean:(_Bool)arg1;
- (id)setTasksEnabledWithBoolean:(_Bool)arg1;

@end
