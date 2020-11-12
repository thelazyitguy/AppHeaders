//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class OGLAccountMenuDependencies;
@protocol OGLAccountMenuDelegate, OGLAccountMenuSession, OGLMultipleAccountMenuDelegate;

@protocol OGLAccountMenuPresenter <NSObject>
@property(nonatomic) __weak id <OGLMultipleAccountMenuDelegate> multipleAccountMenuDelegate;
@property(nonatomic) __weak id <OGLAccountMenuDelegate> accountMenuDelegate;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) __weak id <OGLAccountMenuSession> session;
@property(readonly, nonatomic) OGLAccountMenuDependencies *accountMenuDependencies;
@end
