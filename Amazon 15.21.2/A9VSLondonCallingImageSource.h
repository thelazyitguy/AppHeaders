//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSString;

@interface A9VSLondonCallingImageSource : NSObject
{
    NSArray *_influencerItems;
    NSString *_cursor;
    NSArray *_requiredTags;
    NSArray *_allTags;
    NSArray *_homePageItems;
    NSCache *_imageCache;
}

@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSArray *homePageItems; // @synthesize homePageItems=_homePageItems;
@property(retain, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(retain, nonatomic) NSArray *requiredTags; // @synthesize requiredTags=_requiredTags;
@property(retain, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *influencerItems; // @synthesize influencerItems=_influencerItems;
- (void).cxx_destruct;
- (void)addHomePageDataItems:(id)arg1;
- (void)addExploreDataItems:(id)arg1;
- (void)addToImageSourceFromResult:(id)arg1;
- (id)getOptionalSelectedTags;
- (void)refreshImageSourceWithResult:(id)arg1;
- (void)clearAllTags;
- (void)cancelAllPendingRequests;
- (void)setSelectionStateForTag:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithLondonCallingResult:(id)arg1;

@end
