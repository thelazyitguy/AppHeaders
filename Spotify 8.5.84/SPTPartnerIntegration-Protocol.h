//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;

@protocol SPTPartnerIntegration <NSObject>
- (_Bool)isInstalled;
@property(nonatomic, readonly) UIImage *icon;
@property(nonatomic, readonly) NSString *redirectURIPath;
@property(nonatomic, readonly) NSString *redirectURI;
@property(nonatomic, readonly) NSString *applicationBundleIdentifier;
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *descriptionText;
@property(nonatomic, readonly) NSString *name;

@optional
- (void)handleSecondaryButtonAction;
- (_Bool)authCompletionHandler:(_Bool)arg1 responseURI:(NSURL *)arg2;
@property(nonatomic, readonly) NSURL *secondaryActionURI;
@property(nonatomic, readonly) NSURL *appStoreURI;
@property(nonatomic, readonly) NSString *classNameForCell;
@property(nonatomic, readonly) NSString *responseType;
@property(nonatomic, readonly) NSString *scopes;

// Remaining properties
@property(nonatomic, readonly) _Bool installed;
@end
