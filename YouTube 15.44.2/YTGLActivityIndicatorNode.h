//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGLGroupNode.h>

@class YTGLTextureNode;

@interface YTGLActivityIndicatorNode : YTGLGroupNode
{
    double _spinnerAnimationStartTime;
    YTGLTextureNode *_spinner;
}

- (void).cxx_destruct;
- (void)setAnimating:(_Bool)arg1;
- (id)init;
- (id)initWithSpinnerTexture:(id)arg1;

@end

