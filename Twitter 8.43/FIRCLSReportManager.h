//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterCrashlytics/FIRCLSNetworkClientDelegate-Protocol.h>
#import <TwitterCrashlytics/FIRCLSReportUploaderDataSource-Protocol.h>
#import <TwitterCrashlytics/FIRCLSReportUploaderDelegate-Protocol.h>

@class FBLPromise, FIRCLSApplicationIdentifierModel, FIRCLSDataCollectionArbiter, FIRCLSExecutionIdentifierModel, FIRCLSFileManager, FIRCLSInstallIdentifierModel, FIRCLSNetworkClient, FIRCLSReportUploader, FIRCLSSettings, FIRCLSSettingsOnboardingManager, GDTCORTransport, NSOperationQueue, NSString;
@protocol FIRAnalyticsInterop, OS_dispatch_queue;

@interface FIRCLSReportManager : NSObject <FIRCLSNetworkClientDelegate, FIRCLSReportUploaderDelegate, FIRCLSReportUploaderDataSource>
{
    FIRCLSFileManager *_fileManager;
    FIRCLSNetworkClient *_networkClient;
    FIRCLSReportUploader *_uploader;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSOperationQueue *_operationQueue;
    id <FIRAnalyticsInterop> _analytics;
    FBLPromise *_unsentReportsAvailable;
    FBLPromise *_reportActionProvided;
    FBLPromise *_unsentReportsHandled;
    // Error parsing type: AB, name: _checkForUnsentReportsCalled
    _Bool _registeredAnalyticsEventListener;
    NSString *_googleAppID;
    FIRCLSDataCollectionArbiter *_dataArbiter;
    FIRCLSApplicationIdentifierModel *_appIDModel;
    FIRCLSInstallIdentifierModel *_installIDModel;
    FIRCLSExecutionIdentifierModel *_executionIDModel;
    FIRCLSSettings *_settings;
    FIRCLSSettingsOnboardingManager *_settingsAndOnboardingManager;
    GDTCORTransport *_googleTransport;
}

+ (void)setReportSentCallback:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) FIRCLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) FIRCLSNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) GDTCORTransport *googleTransport; // @synthesize googleTransport=_googleTransport;
@property(retain, nonatomic) FIRCLSSettingsOnboardingManager *settingsAndOnboardingManager; // @synthesize settingsAndOnboardingManager=_settingsAndOnboardingManager;
@property(retain, nonatomic) FIRCLSSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) FIRCLSExecutionIdentifierModel *executionIDModel; // @synthesize executionIDModel=_executionIDModel;
@property(retain, nonatomic) FIRCLSInstallIdentifierModel *installIDModel; // @synthesize installIDModel=_installIDModel;
@property(retain, nonatomic) FIRCLSApplicationIdentifierModel *appIDModel; // @synthesize appIDModel=_appIDModel;
@property(retain, nonatomic) FIRCLSDataCollectionArbiter *dataArbiter; // @synthesize dataArbiter=_dataArbiter;
@property(readonly, nonatomic) NSString *googleAppID; // @synthesize googleAppID=_googleAppID;
- (void).cxx_destruct;
- (void)didSubmitReport;
- (void)didCompleteAllSubmissions;
- (void)didCompletePackageSubmission:(id)arg1 dataCollectionToken:(id)arg2 error:(id)arg3;
- (void)networkClient:(id)arg1 didFinishUploadWithPath:(id)arg2 error:(id)arg3;
- (_Bool)networkClientCanUseBackgroundSessions:(id)arg1;
- (void)didChangeUIOrientation:(id)arg1;
- (void)didChangeOrientation:(id)arg1;
- (void)didBecomeInactive:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)captureInitialNotificationStates;
- (void)setupStateNotifications;
- (void)registerAnalyticsEventListener;
- (_Bool)checkForAndCreateLaunchMarker;
- (_Bool)removeLaunchFailureMarker;
- (_Bool)launchFailureMarkerPresent;
- (_Bool)createLaunchFailureMarker;
- (id)launchFailureMarkerPath;
- (void)retryUploadForReportAtPath:(id)arg1 dataCollectionToken:(id)arg2;
- (void)uploadPreexistingFiles:(id)arg1 withToken:(id)arg2;
- (void)handleExistingFilesInPreparedWithToken:(id)arg1;
- (void)handleExistingFilesInProcessingWithToken:(id)arg1;
- (void)handleContentsInOtherReportingDirectoriesWithToken:(id)arg1;
- (void)removeExistingReportPaths:(id)arg1;
- (void)deleteUnsentReportsWithPreexisting:(id)arg1;
- (void)submitReport:(id)arg1 dataCollectionToken:(id)arg2;
- (void)processExistingActiveReportPath:(id)arg1 dataCollectionToken:(id)arg2 asUrgent:(_Bool)arg3;
- (void)processExistingReportPaths:(id)arg1 dataCollectionToken:(id)arg2 asUrgent:(_Bool)arg3;
- (int)countSubmittableAndDeleteUnsubmittableReportPaths:(id)arg1;
- (id)setupCurrentReport:(id)arg1;
@property(readonly, nonatomic) FIRCLSReportUploader *uploader;
- (_Bool)validateAppIdentifiers;
- (void)crashReportingSetupCompleted:(unsigned long long)arg1;
- (_Bool)startCrashReporterWithProfilingMark:(unsigned long long)arg1 report:(id)arg2;
- (void)beginReportUploadsWithToken:(id)arg1 preexistingReportPaths:(id)arg2 blockingSend:(_Bool)arg3 report:(id)arg4;
- (void)beginSettingsAndOnboardingWithToken:(id)arg1 waitForSettingsRequest:(_Bool)arg2;
- (void)checkAndRotateInstallUUIDIfNeededWithReport:(id)arg1;
- (id)startWithProfilingMark:(unsigned long long)arg1;
- (id)deleteUnsentReports;
- (id)sendUnsentReports;
- (id)checkForUnsentReports;
- (id)waitForReportAction;
- (int)unsentReportsCountWithPreexisting:(id)arg1;
- (id)clientWithOperationQueue:(id)arg1;
- (id)initWithFileManager:(id)arg1 installations:(id)arg2 analytics:(id)arg3 googleAppID:(id)arg4 dataArbiter:(id)arg5 googleTransport:(id)arg6 appIDModel:(id)arg7 settings:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

