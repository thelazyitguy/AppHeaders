//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsDynamiteV1SharedAccountIosAccountModule, ComGoogleAppsDynamiteV1SharedLoggingIosReportingModule, DYNSAnalyticsIosClearcutModule, DYNSApiConfigModule, DYNSExecutorsIosExecutorsModule, DYNSFlagsFlagsModule, DYNSNetworkIosNetworkModule, DYNSStringsIosStringsModule, DYNSTracingIosTracingModule;

@interface DYNSApiDaggerIosSharedComponent_Builder : NSObject
{
    DYNSApiConfigModule *configModule_;
    DYNSFlagsFlagsModule *flagsModule_;
    ComGoogleAppsDynamiteV1SharedAccountIosAccountModule *iosAccountModule_;
    DYNSAnalyticsIosClearcutModule *iosClearcutModule_;
    DYNSExecutorsIosExecutorsModule *iosExecutorsModule_;
    DYNSNetworkIosNetworkModule *iosNetworkModule_;
    ComGoogleAppsDynamiteV1SharedLoggingIosReportingModule *iosReportingModule_;
    DYNSStringsIosStringsModule *iosStringsModule_;
    DYNSTracingIosTracingModule *iosTracingModule_;
}

- (void)dealloc;
- (id)build;
- (id)lifecycleModuleWithDYNSLifecycleLifecycleModule:(id)arg1;
- (id)iosTracingModuleWithDYNSTracingIosTracingModule:(id)arg1;
- (id)iosStringsModuleWithDYNSStringsIosStringsModule:(id)arg1;
- (id)iosReportingModuleWithComGoogleAppsDynamiteV1SharedLoggingIosReportingModule:(id)arg1;
- (id)iosNetworkModuleWithDYNSNetworkIosNetworkModule:(id)arg1;
- (id)jobModuleWithComGoogleAppsXplatJobsJobModule:(id)arg1;
- (id)executorsLifecycleModuleWithDYNSExecutorsExecutorsLifecycleModule:(id)arg1;
- (id)iosExecutorsModuleWithDYNSExecutorsIosExecutorsModule:(id)arg1;
- (id)iosClearcutModuleWithDYNSAnalyticsIosClearcutModule:(id)arg1;
- (id)iosAccountModuleWithComGoogleAppsDynamiteV1SharedAccountIosAccountModule:(id)arg1;
- (id)flagsModuleWithDYNSFlagsFlagsModule:(id)arg1;
- (id)configModuleWithDYNSApiConfigModule:(id)arg1;
- (id)actionsModuleWithDYNSActionsActionsModule:(id)arg1;

@end
