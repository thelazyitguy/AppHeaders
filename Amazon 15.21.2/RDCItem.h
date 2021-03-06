//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface RDCItem : NSObject
{
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToItem:(id)arg1;
@property(readonly, nonatomic) NSArray *anchorIds;
@property(readonly, nonatomic) NSDictionary *linkParameters;
@property(readonly, nonatomic) NSString *uniqueURLIdentifier;
@property(readonly, nonatomic) NSNumber *absolutePosition;
@property(readonly, nonatomic) NSNumber *relativePosition;
@property(readonly, nonatomic) NSString *source;
@property(readonly, nonatomic) NSString *p13nMetricsId;
- (id)description;
@property(readonly, nonatomic) NSString *iconImageName;
@property(readonly, nonatomic) _Bool forceShowChevron;
@property(readonly, nonatomic) _Bool logImpressionMetrics;
@property(readonly, nonatomic) NSString *a11yLabel;
@property(readonly, nonatomic) NSURL *uri;
@property(readonly, nonatomic) unsigned long long deviceType;
@property(readonly, nonatomic) unsigned long long marketplaceType;
@property(readonly, nonatomic) unsigned long long visibility;
@property(readonly, nonatomic) NSString *refMarker;
@property(readonly, nonatomic) NSNumber *height;
@property(readonly, nonatomic) _Bool showBorder;
@property(readonly, nonatomic) NSURL *imageUrl;
@property(readonly, nonatomic) NSString *subMenuTitle;
@property(readonly, nonatomic) NSString *subText;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *itemId;
@property(readonly, nonatomic) NSString *itemType;
- (id)initWithMenuData:(id)arg1;

@end

