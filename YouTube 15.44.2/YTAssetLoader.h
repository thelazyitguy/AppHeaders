//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle;

@interface YTAssetLoader : NSObject
{
    NSBundle *_bundle;
}

- (void).cxx_destruct;
- (id)imageNamed:(id)arg1;
- (id)imageNamed:(id)arg1 stretchable:(_Bool)arg2 selected:(_Bool)arg3 color:(id)arg4;
- (id)imageNamed:(id)arg1 stretchable:(_Bool)arg2 selected:(_Bool)arg3;
- (id)imageViewWithImageName:(id)arg1 stretchable:(_Bool)arg2 selected:(_Bool)arg3;
- (id)initWithBundle:(id)arg1;

@end
