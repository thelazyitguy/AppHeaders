//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCVAttributesProto_ViewArgs, JCVAttributesProto_ViewGravitySet, JCVComponentsProto_Component, JCVLinearLayoutProto_LinearLayoutArgs_Gravity;
@protocol JavaUtilList;

@protocol JCVLinearLayoutProto_LinearLayoutArgsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCVAttributesProto_ViewGravitySet *)getGravity;
- (_Bool)hasGravity;
- (_Bool)getClipChildren;
- (_Bool)hasClipChildren;
- (JCVAttributesProto_ViewArgs *)getViewArgs;
- (_Bool)hasViewArgs;
- (JCVLinearLayoutProto_LinearLayoutArgs_Gravity *)getDeprecatedGravity;
- (_Bool)hasDeprecatedGravity;
- (_Bool)getColumn;
- (_Bool)hasColumn;
- (JCVComponentsProto_Component *)getContentWithInt:(int)arg1;
- (id <JavaUtilList>)getContentList;
- (int)getContentCount;
@end
