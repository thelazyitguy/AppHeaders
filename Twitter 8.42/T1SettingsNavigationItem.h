//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface T1SettingsNavigationItem : NSObject
{
    NSString *_title;
    NSString *_detail;
    CDUnknownBlockType _controllerFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType controllerFactory; // @synthesize controllerFactory=_controllerFactory;
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 controllerFactory:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 controllerFactory:(CDUnknownBlockType)arg2;
- (id)init;

@end

