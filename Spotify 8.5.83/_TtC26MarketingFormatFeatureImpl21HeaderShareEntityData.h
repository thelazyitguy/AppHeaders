//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareEntityData-Protocol.h"

@class NSArray, NSString, NSURL, UIImage;

@interface _TtC26MarketingFormatFeatureImpl21HeaderShareEntityData : NSObject <SPTShareEntityData>
{
    // Error parsing type: , name: itemURI
    // Error parsing type: , name: itemContextSourceURI
    // Error parsing type: , name: itemName
    // Error parsing type: , name: creatorName
    // Error parsing type: , name: sourceName
    // Error parsing type: , name: itemImageURL
    // Error parsing type: , name: itemType
    // Error parsing type: , name: clipboardLinkTitle
    // Error parsing type: , name: logContext
    // Error parsing type: , name: stickerImage
    // Error parsing type: , name: fullscreenBackgroundImage
    // Error parsing type: , name: freeText
    // Error parsing type: , name: extraQueryItems
    // Error parsing type: , name: capability
    // Error parsing type: , name: integration
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *integration;
@property(nonatomic, readonly) unsigned long long capability; // @synthesize capability;
@property(nonatomic, readonly) NSArray *extraQueryItems;
@property(nonatomic, readonly) NSString *freeText;
@property(nonatomic, readonly) UIImage *fullscreenBackgroundImage; // @synthesize fullscreenBackgroundImage;
@property(nonatomic, readonly) UIImage *stickerImage; // @synthesize stickerImage;
@property(nonatomic, readonly) NSString *logContext;
@property(nonatomic, readonly) NSString *clipboardLinkTitle;
@property(nonatomic, readonly) long long itemType; // @synthesize itemType;
@property(nonatomic, readonly) NSURL *itemImageURL;
@property(nonatomic, readonly) NSString *sourceName;
@property(nonatomic, readonly) NSString *creatorName;
@property(nonatomic, readonly) NSString *itemName;
@property(nonatomic, readonly) NSURL *itemContextSourceURI;
@property(nonatomic, readonly) NSURL *itemURI;

@end

