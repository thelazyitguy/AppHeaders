//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSDictionary, NSURL;

@protocol YTImageSelectionStrategy <NSObject>
+ (id)new;
+ (id)alloc;
- (NSURL *)selectURLForTargetSize:(struct CGSize)arg1 fromURLs:(NSDictionary *)arg2;
@end

