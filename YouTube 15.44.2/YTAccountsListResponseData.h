//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSError, NSMutableArray, YTAccountsListService, YTGoogleAccount, YTIAccountsListResponse, YTInnerTubeFeedControllerDataSource;
@protocol YTAccountsListResponseDataDelegate;

@interface YTAccountsListResponseData : NSObject
{
    YTAccountsListService *_accountsListService;
    YTIAccountsListResponse *_accountsListResponse;
    YTGoogleAccount *_googleAccount;
    YTInnerTubeFeedControllerDataSource *_dataSource;
    int _callCircumstance;
    NSMutableArray *_accountItems;
    GIMMe *_gimme;
    unsigned long long _status;
    NSError *_error;
    id <YTAccountsListResponseDataDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <YTAccountsListResponseDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) YTGoogleAccount *googleAccount; // @synthesize googleAccount=_googleAccount;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)notifyStatusDidChangeWithOldStatus:(unsigned long long)arg1;
- (void)updateStatus:(unsigned long long)arg1;
- (_Bool)requestNextPage;
- (id)frictionlessSignInAccountItemRenderer;
- (id)accountItems;
- (id)defaultAccountItem;
- (id)accountItemWithObfuscatedGaiaId:(id)arg1;
- (id)accountItemWithPageIDOrMainAccountItem:(id)arg1;
- (id)defaultServiceEndpoint;
- (_Bool)fetchNextPage;
- (id)debugDescription;
- (void)reloadWithPersonaVersion:(id)arg1 includeBrandAccounts:(_Bool)arg2;
- (void)reloadWithPersonaVersion:(id)arg1;
- (void)reload;
@property(readonly, nonatomic) long long itemCount;
- (id)itemAtIndex:(long long)arg1;
- (id)initWithGoogleAccount:(id)arg1 delegate:(id)arg2;
- (id)initWithGoogleAccount:(id)arg1 delegate:(id)arg2 callCircumstance:(int)arg3;

@end
