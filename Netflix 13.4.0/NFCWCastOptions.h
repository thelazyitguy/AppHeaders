//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFCWObject.h>

@class NFCWLaunchOptions, NSString;

@interface NFCWCastOptions : NFCWObject
{
    _Bool _suspendSessionsWhenBackgrounded;
}

@property(nonatomic) _Bool suspendSessionsWhenBackgrounded; // @synthesize suspendSessionsWhenBackgrounded=_suspendSessionsWhenBackgrounded;
- (id)nfcwBundle;
- (Class)gckCastOptionsClass;
@property(nonatomic) _Bool disableDiscoveryAutostart;
@property(copy, nonatomic) NSString *sharedContainerIdentifier;
@property(copy, nonatomic) NFCWLaunchOptions *launchOptions;
@property(nonatomic) _Bool physicalVolumeButtonsWillControlDeviceVolume;
- (id)initWithSupportedNamespaces:(id)arg1;
- (id)initWithReceiverApplicationID:(id)arg1;

@end
