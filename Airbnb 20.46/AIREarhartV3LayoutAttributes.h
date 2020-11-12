//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIREarhartV3AspectRatio, AIREarhartV3Dimensions, AIREarhartV3Padding, NSString;

@interface AIREarhartV3LayoutAttributes : AIRModel
{
    AIREarhartV3AspectRatio *_aspectRatio;
    AIREarhartV3Padding *_padding;
    NSString *_verticalAlignment;
    NSString *_horizontalAlignment;
    AIREarhartV3Dimensions *_dimensions;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIREarhartV3Dimensions *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, copy, nonatomic) NSString *horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(readonly, copy, nonatomic) NSString *verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(readonly, copy, nonatomic) AIREarhartV3Padding *padding; // @synthesize padding=_padding;
@property(readonly, copy, nonatomic) AIREarhartV3AspectRatio *aspectRatio; // @synthesize aspectRatio=_aspectRatio;

@end
