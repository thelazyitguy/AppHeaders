//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class CMLLPDimension, CMLLPStyle, JCVComponentsProto_Component;
@protocol JavaUtilList;

@protocol CMLLPScrollViewArgsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (CMLLPDimension *)getWebHeight;
- (_Bool)hasWebHeight;
- (double)getScrollY;
- (_Bool)hasScrollY;
- (JCVComponentsProto_Component *)getContentWithInt:(int)arg1;
- (id <JavaUtilList>)getContentList;
- (int)getContentCount;
- (CMLLPStyle *)getStyle;
- (_Bool)hasStyle;
@end
