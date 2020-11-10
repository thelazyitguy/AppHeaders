//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIPlaybackDataEntity, NFUIPlaybackValidator, NFUIPlaygraphValidationContext, NFUIPlaygraphViewabletem;

@interface NFUIPlaygraphValidator : NSObject
{
    NFUIPlaygraphViewabletem *_viewableItem;
    NFUIPlaybackDataEntity *_playbackDataEntity;
    NFUIPlaybackValidator *_validator;
    NFUIPlaygraphValidationContext *_validationContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFUIPlaygraphValidationContext *validationContext; // @synthesize validationContext=_validationContext;
@property(retain, nonatomic) NFUIPlaybackValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) NFUIPlaybackDataEntity *playbackDataEntity; // @synthesize playbackDataEntity=_playbackDataEntity;
@property(retain, nonatomic) NFUIPlaygraphViewabletem *viewableItem; // @synthesize viewableItem=_viewableItem;
- (id)validatedRequestForViewable;
- (_Bool)validateForPinProtection:(CDUnknownBlockType)arg1;
- (_Bool)viewableItemIsValidForPlaygraph;
- (id)initWithViewableItem:(id)arg1 playbackData:(id)arg2;

@end

