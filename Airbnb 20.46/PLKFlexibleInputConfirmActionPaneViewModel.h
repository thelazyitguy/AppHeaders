//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PLKFlexibleInputConfirmActionPaneViewModel : NSObject
{
    _Bool _showsInstructions;
    unsigned long long _step;
    NSDictionary *_instructionPane;
    NSString *_heading;
    NSString *_placeholder;
    NSString *_submitButton;
    NSString *_instructionsButton;
}

- (void).cxx_destruct;
@property(readonly) _Bool showsInstructions; // @synthesize showsInstructions=_showsInstructions;
@property(readonly) NSString *instructionsButton; // @synthesize instructionsButton=_instructionsButton;
@property(readonly) NSString *submitButton; // @synthesize submitButton=_submitButton;
@property(readonly) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly) NSString *heading; // @synthesize heading=_heading;
@property(readonly) NSDictionary *instructionPane; // @synthesize instructionPane=_instructionPane;
@property unsigned long long step; // @synthesize step=_step;
- (id)initWithInstitution:(id)arg1 flexibleInputs:(id)arg2 step:(unsigned long long)arg3 configuration:(id)arg4;

@end
