//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/NSObject-Protocol.h>

@class NSString;
@protocol CMRUIComponent, CMRUIComponentCreator;

@protocol CMRUIComponentRegistry <NSObject>
- (id <CMRUIComponent>)createComponent:(NSString *)arg1 componentType:(NSString *)arg2 jsonPayload:(NSString *)arg3;
- (void)setCreator:(id <CMRUIComponentCreator>)arg1 componentType:(NSString *)arg2;
@end

