//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DSCSizeCache : NSObject
{
    NSMutableArray *_sizeCache;
    long long _defaultWidth;
    long long _defaultHeight;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(readonly, nonatomic) long long defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(retain, nonatomic) NSMutableArray *sizeCache; // @synthesize sizeCache=_sizeCache;
- (void)resetSizeCache;
- (struct CGSize)sizeForIndexPath:(id)arg1;
- (void)invalidateSizeAtIndexPath:(id)arg1;
- (void)replaceSizeAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2;
- (void)removeSection:(long long)arg1;
- (void)removeSizeAtIndexPath:(id)arg1;
- (void)insertSize:(struct CGSize)arg1 atIndexPath:(id)arg2;
- (id)initWithDefaultWidth:(long long)arg1 height:(long long)arg2;

@end
