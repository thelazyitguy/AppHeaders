//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGPLCrashReport.h>

@interface IBGCrashReport : IBGPLCrashReport
{
}

- (id)getUUIDForImage:(id)arg1;
- (id)getMachineArchForReport;
- (id)getSystemBuildForReport;
- (id)getSystemVersionForReport;
- (id)getAppImageNameForReport;
- (id)generateFormattedStackForStackFrames:(id)arg1 shouldExcludingInstabugFrame:(_Bool)arg2;
- (id)reportStringForReportWithExcludingInstabugFrame:(_Bool)arg1;

@end

