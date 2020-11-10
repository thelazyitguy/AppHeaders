//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable;

@interface YTPostCreationImageManager : NSObject
{
    NSHashTable *_observers;
    NSArray *_images;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)notifyIfImageRemovedWithID:(id)arg1;
- (void)notifyIfImageSet;
- (void)addImageUpdatedObserver:(id)arg1;
- (void)updateImageWithID:(id)arg1 coordinates:(id)arg2;
- (id)getImageWithID:(id)arg1;
- (long long)getImageIndexWithID:(id)arg1;
- (id)getImageIDs;
- (void)removeImageWithID:(id)arg1;
- (id)init;

@end
