//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTScannablesScanViewModel;
@protocol SPTScannable;

@protocol SPTScannablesScanViewModelDelegate <NSObject>
- (void)scannablesScanViewModel:(SPTScannablesScanViewModel *)arg1 didFailScanWithError:(NSError *)arg2;
- (void)scannablesScanViewModel:(SPTScannablesScanViewModel *)arg1 didScanScannable:(id <SPTScannable>)arg2;
@end

