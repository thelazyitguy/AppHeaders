//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JMBaseState, NSMutableSet, NSRecursiveLock;

@interface JMStateMachine : NSObject
{
    _Bool _isActive;
    JMBaseState *_initialState;
    JMBaseState *_currentState;
    NSRecursiveLock *_fireEventLock;
    NSMutableSet *_states;
}

+ (id)stateMachine;
@property(retain, nonatomic) NSMutableSet *states; // @synthesize states=_states;
@property(retain, nonatomic) NSRecursiveLock *fireEventLock; // @synthesize fireEventLock=_fireEventLock;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak JMBaseState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak JMBaseState *initialState; // @synthesize initialState=_initialState;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)stateWithName:(id)arg1;
- (_Bool)isCurrentStateName:(id)arg1;
- (id)transitionWithEventName:(id)arg1;
- (id)allStates;
- (void)resetToStateWithName:(id)arg1;
- (void)reset;
- (void)activate;
- (_Bool)fireEvent:(id)arg1;
- (_Bool)fireEventWithName:(id)arg1;
- (_Bool)canFireEvent:(id)arg1;
- (_Bool)canFireEventWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (id)init;
- (void)raiseStateMachineDuplicateStateExceptionForState:(id)arg1;
- (void)raiseStateMachineActivationException;
- (void)raiseStateMachineIsImmutableException;

@end
