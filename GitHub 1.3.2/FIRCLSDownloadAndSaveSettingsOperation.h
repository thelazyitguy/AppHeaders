//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FIRCLSNetworkOperation.h"

@class FIRCLSFABNetworkClient, FIRCLSInstallIdentifierModel, NSError, NSFileManager, NSString, NSURL;
@protocol FIRCLSDownloadAndSaveSettingsOperationDelegate;

@interface FIRCLSDownloadAndSaveSettingsOperation : FIRCLSNetworkOperation
{
    id <FIRCLSDownloadAndSaveSettingsOperationDelegate> _delegate;
    NSError *_error;
    NSURL *_settingsURL;
    NSFileManager *_fileManager;
    NSString *_settingsDirectoryPath;
    NSString *_settingsFilePath;
    FIRCLSInstallIdentifierModel *_installIDModel;
    FIRCLSFABNetworkClient *_networkClient;
}

@property(readonly, nonatomic) __weak FIRCLSFABNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(readonly, nonatomic) FIRCLSInstallIdentifierModel *installIDModel; // @synthesize installIDModel=_installIDModel;
@property(readonly, nonatomic) NSString *settingsFilePath; // @synthesize settingsFilePath=_settingsFilePath;
@property(readonly, nonatomic) NSString *settingsDirectoryPath; // @synthesize settingsDirectoryPath=_settingsDirectoryPath;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) __weak id <FIRCLSDownloadAndSaveSettingsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)main;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1;
- (id)initWithGoogleAppID:(id)arg1 delegate:(id)arg2 settingsURL:(id)arg3 settingsDirectoryPath:(id)arg4 settingsFilePath:(id)arg5 installIDModel:(id)arg6 networkClient:(id)arg7 token:(id)arg8;

@end
