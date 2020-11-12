//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIView;
@protocol IFModelProtocol, IFRouterProtocol, IFViewProtocol;

@protocol IFControllerProtocol <NSObject>
@property(nonatomic, retain) UIView<IFViewProtocol> *view;
@property(nonatomic, retain) id <IFModelProtocol> model;
@property(nonatomic, retain) id <IFRouterProtocol> router;
@end
