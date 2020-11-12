//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/MDMQuery.h>

@class NSString, NSURL;

@interface MDMFetchRegisterTokenQuery : MDMQuery
{
    NSString *_apnsToken;
    _Bool _isRegistrationFromDpApp;
    NSURL *_registerURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *registerURL; // @synthesize registerURL=_registerURL;
- (id)requestBody;
- (void)processError:(id)arg1;
- (void)processResponse:(id)arg1;
- (id)fetcher;
- (int)queryType;
- (id)initWithDelegate:(id)arg1 deviceId:(id)arg2 apnsToken:(id)arg3 isRegistrationFromDpApp:(_Bool)arg4;
- (int)queryErrorEventType;
- (int)querySuccessEventType;
- (int)querySubmitEventType;

@end
