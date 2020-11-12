//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount;
@protocol T1CameraEventHashtagsFetcherDelegate;

@interface T1CameraEventHashtagsFetcher : NSObject
{
    id <T1CameraEventHashtagsFetcherDelegate> _delegate;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1CameraEventHashtagsFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_main_didLookupTypeaheadResults:(id)arg1;
- (void)_t1_main_didFailToUpdateCurrentLocation:(id)arg1 error:(id)arg2;
- (void)fetchCurrentEventHashtagsAtAccountCurrentLocation;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end
