//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, UIGestureRecognizer, XUIElementsContext;
@protocol ELMController;

@protocol XUIExtensionRegistrarDelegate
- (void)handlePropertiesExtensionNumber:(int)arg1 properties:(NSData *)arg2 controller:(id <ELMController>)arg3 context:(XUIElementsContext *)arg4;
- (void)handleCommandNumber:(int)arg1 command:(NSData *)arg2 sender:(NSData *)arg3 context:(XUIElementsContext *)arg4 controller:(id <ELMController>)arg5 gesture:(UIGestureRecognizer *)arg6 handler:(void (^)(id, NSError *))arg7;
- (_Bool)canHandlePropertiesExtensionNumber:(int)arg1;
- (_Bool)canHandleCommandNumber:(int)arg1;
@end

