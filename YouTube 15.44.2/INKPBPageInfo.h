//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBPageSpec, INKPBRect, INKPBTransform;

@interface INKPBPageInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) INKPBRect *bounds; // @dynamic bounds;
@property(nonatomic) _Bool hasBounds; // @dynamic hasBounds;
@property(nonatomic) _Bool hasPageIndex; // @dynamic hasPageIndex;
@property(nonatomic) _Bool hasPageSpec; // @dynamic hasPageSpec;
@property(nonatomic) _Bool hasPageToWorld; // @dynamic hasPageToWorld;
@property(nonatomic) unsigned int pageIndex; // @dynamic pageIndex;
@property(retain, nonatomic) INKPBPageSpec *pageSpec; // @dynamic pageSpec;
@property(retain, nonatomic) INKPBTransform *pageToWorld; // @dynamic pageToWorld;

@end

