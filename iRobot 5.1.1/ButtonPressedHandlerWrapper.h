//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ButtonPressedHandlerWrapper : NSObject
{
    CDUnknownBlockType _buttonPressedHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buttonPressedHandler; // @synthesize buttonPressedHandler=_buttonPressedHandler;
- (void)callButtonPressedHandler;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end
