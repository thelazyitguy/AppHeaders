//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

#import "DYNContentViewObject-Protocol.h"
#import "DYNConversationLauncherCellModel-Protocol.h"

@class NSString, UIImage;
@protocol DYNContentViewObjectActionDelegate, GILVisualElementParams;

@interface DYNConversationLauncherContentViewObject : GOOBaseContentViewObject <DYNContentViewObject, DYNConversationLauncherCellModel>
{
    int _visualElementID;
    int _type;
    UIImage *_image;
    NSString *_title;
    NSString *_imageName;
    long long _badgeCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
@property(readonly, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int visualElementID; // @synthesize visualElementID=_visualElementID;
@property(retain, nonatomic) Class contentViewClass;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) Class collectionViewCellClass;
@property(readonly, nonatomic) NSString *reuseIdentifier;
- (_Bool)shouldShowInkView;
- (id)initWithType:(int)arg1 badgeCount:(long long)arg2;

// Remaining properties
@property(nonatomic) __weak id <DYNContentViewObjectActionDelegate> actionDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <GILVisualElementParams> visualElementParams;

@end
