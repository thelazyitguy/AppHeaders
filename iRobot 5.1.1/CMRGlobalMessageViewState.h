//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMRAlertDialogViewState, CMRReAddAxedaRobotInstructionDescriptor, NSString;

@interface CMRGlobalMessageViewState : NSObject
{
    NSString *_configuration;
    CMRAlertDialogViewState *_axedaRobotAlert;
    CMRReAddAxedaRobotInstructionDescriptor *_reAddAxedaRobotInstruction;
}

+ (id)GlobalMessageViewStateWithConfiguration:(id)arg1 axedaRobotAlert:(id)arg2 reAddAxedaRobotInstruction:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) CMRReAddAxedaRobotInstructionDescriptor *reAddAxedaRobotInstruction; // @synthesize reAddAxedaRobotInstruction=_reAddAxedaRobotInstruction;
@property(readonly, nonatomic) CMRAlertDialogViewState *axedaRobotAlert; // @synthesize axedaRobotAlert=_axedaRobotAlert;
@property(readonly, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfiguration:(id)arg1 axedaRobotAlert:(id)arg2 reAddAxedaRobotInstruction:(id)arg3;

@end
