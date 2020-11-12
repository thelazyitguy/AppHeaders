//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GBTMessageRegionGroupHTML, NSArray, NSNumber, NSString;

@interface GBTMessageRegionGroup : NSObject
{
    _Bool _dynamicMail;
    _Bool _collapsible;
    _Bool _collapsed;
    NSArray *_messageRegions;
    unsigned long long _firstRegionIndex;
    GBTMessageRegionGroupHTML *_HTML;
    NSString *_dynamicMailToken;
    NSNumber *_zoomedHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *zoomedHeight; // @synthesize zoomedHeight=_zoomedHeight;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(readonly, nonatomic, getter=isCollapsible) _Bool collapsible; // @synthesize collapsible=_collapsible;
@property(readonly, nonatomic) NSString *dynamicMailToken; // @synthesize dynamicMailToken=_dynamicMailToken;
@property(readonly, nonatomic, getter=isDynamicMail) _Bool dynamicMail; // @synthesize dynamicMail=_dynamicMail;
@property(readonly, nonatomic) GBTMessageRegionGroupHTML *HTML; // @synthesize HTML=_HTML;
@property(readonly, nonatomic) unsigned long long firstRegionIndex; // @synthesize firstRegionIndex=_firstRegionIndex;
@property(readonly, nonatomic) NSArray *messageRegions; // @synthesize messageRegions=_messageRegions;
- (id)initWithDynamicMailMessageRegion:(id)arg1 HTML:(id)arg2 regionIndex:(unsigned long long)arg3;
- (id)initWithMessageRegions:(id)arg1 HTML:(id)arg2 collapsible:(_Bool)arg3 firstRegionIndex:(unsigned long long)arg4;
- (id)initWithMessageRegion:(id)arg1 HTML:(id)arg2 collapsible:(_Bool)arg3 regionIndex:(unsigned long long)arg4;

@end
