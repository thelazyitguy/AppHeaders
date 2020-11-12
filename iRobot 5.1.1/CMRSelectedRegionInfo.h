//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CMRSelectedRegionInfo : NSObject
{
    NSArray *_regionImages;
    long long _selectedIndex;
    NSArray *_usedRegionNames;
}

+ (id)SelectedRegionInfoWithRegionImages:(id)arg1 selectedIndex:(long long)arg2 usedRegionNames:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *usedRegionNames; // @synthesize usedRegionNames=_usedRegionNames;
@property(readonly, nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(readonly, nonatomic) NSArray *regionImages; // @synthesize regionImages=_regionImages;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRegionImages:(id)arg1 selectedIndex:(long long)arg2 usedRegionNames:(id)arg3;

@end
