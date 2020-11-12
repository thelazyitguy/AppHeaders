//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURL;

@protocol IAVASTCompanionAdBuilder <NSObject>
@property(nonatomic) int height;
@property(nonatomic) int width;
@property(retain, nonatomic) NSMutableArray *clickTrackingURLsAsStrings;
@property(retain, nonatomic) NSMutableDictionary *trackingEvents;
@property(copy, nonatomic) NSString *htmlString;
@property(retain, nonatomic) NSURL *URL;
@property(retain, nonatomic) NSURL *clickThroughURL;
@property(copy, nonatomic) NSString *altText;
@property(copy, nonatomic) NSString *creativeType;
@property(copy, nonatomic) NSString *resourceTypeString;
@property(copy, nonatomic) NSString *id_;
@end
