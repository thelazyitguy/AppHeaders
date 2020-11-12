//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSFezProduct, NSError, NSURL;

@protocol A9VSFezProductModelManagerDelegate <NSObject>
- (void)didLoadSharedGLTFResourcesToLocalURL:(NSURL *)arg1;
- (void)didFailToLoadProductModelForProduct:(A9VSFezProduct *)arg1 withError:(NSError *)arg2;
- (void)didLoadProductModelForProduct:(A9VSFezProduct *)arg1;

@optional
- (void)didUpdateProductModelDownloadProgress:(float)arg1 forProduct:(A9VSFezProduct *)arg2;
- (void)willDownloadProductModelForProduct:(A9VSFezProduct *)arg1;
@end
