//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTBaseNetworkService.h>

#import <Module_Framework/MLFairPlayLicenseService-Protocol.h>

@class GIMMe, NSString;

@interface MLFairPlayLicenseService : YTBaseNetworkService <MLFairPlayLicenseService>
{
    NSString *_hostOverride;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)createRequestURLWithLicenseRequest:(id)arg1;
- (id)URLRequestForLicenseRequest:(id)arg1;
- (void)makeLicenseRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithOperationQueue:(id)arg1 fetcherService:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
