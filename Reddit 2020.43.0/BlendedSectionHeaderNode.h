//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

@class ASTextNode, BlendedSectionHeaderModel;

@interface BlendedSectionHeaderNode : BaseFeedDisplayNode
{
    ASTextNode *_titleNode;
    BlendedSectionHeaderModel *_headerModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BlendedSectionHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) ASTextNode *titleNode; // @synthesize titleNode=_titleNode;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)configureNodes;
- (id)initWithBlendedSectionHeaderModel:(id)arg1;

@end
