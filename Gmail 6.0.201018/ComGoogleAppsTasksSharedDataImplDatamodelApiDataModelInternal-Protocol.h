//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "TDLDataModel-Protocol.h"

@protocol ComGoogleAppsTasksSharedDataImplDatastoreApiDataStore, ComGoogleAppsXplatClockXClock, XPTTimeService;

@protocol ComGoogleAppsTasksSharedDataImplDatamodelApiDataModelInternal <TDLDataModel, JavaObject>
- (_Bool)isEnableI18n;
- (id <XPTTimeService>)getTimeService;
- (id <ComGoogleAppsXplatClockXClock>)getClock;
- (id <ComGoogleAppsTasksSharedDataImplDatastoreApiDataStore>)getDataStore;
@end

