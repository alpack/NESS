// eslint-disable
// this is an auto generated file. This will be overwritten

export const createUser = `mutation CreateUser($input: CreateUserInput!) {
  createUser(input: $input) {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const updateUser = `mutation UpdateUser($input: UpdateUserInput!) {
  updateUser(input: $input) {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const deleteUser = `mutation DeleteUser($input: DeleteUserInput!) {
  deleteUser(input: $input) {
    id
    owner
    name
    createdAt
    heroes {
      items {
        id
        name
        createdAt
        isOnline
        honor
        level
        exp
        title
        lore
      }
      nextToken
    }
  }
}
`;
export const createHero = `mutation CreateHero($input: CreateHeroInput!) {
  createHero(input: $input) {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const updateHero = `mutation UpdateHero($input: UpdateHeroInput!) {
  updateHero(input: $input) {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const deleteHero = `mutation DeleteHero($input: DeleteHeroInput!) {
  deleteHero(input: $input) {
    id
    user {
      id
      owner
      name
      createdAt
    }
    name
    createdAt
    image {
      bucket
      region
      key
    }
    isOnline
    honor
    level
    exp
    title
    race {
      id
      name
      description
    }
    lore
    skills {
      id
      name
      rank
      description
    }
  }
}
`;
export const createSquad = `mutation CreateSquad($input: CreateSquadInput!) {
  createSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const updateSquad = `mutation UpdateSquad($input: UpdateSquadInput!) {
  updateSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const deleteSquad = `mutation DeleteSquad($input: DeleteSquadInput!) {
  deleteSquad(input: $input) {
    id
    owner
    name
    createdAt
    open
    quests {
      items {
        id
        owner
        createdAt
        updatedAt
        isTaken
        status
        name
        lore
        honorReward
      }
      nextToken
    }
  }
}
`;
export const createQuest = `mutation CreateQuest($input: CreateQuestInput!) {
  createQuest(input: $input) {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
export const updateQuest = `mutation UpdateQuest($input: UpdateQuestInput!) {
  updateQuest(input: $input) {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
export const deleteQuest = `mutation DeleteQuest($input: DeleteQuestInput!) {
  deleteQuest(input: $input) {
    id
    owner
    createdAt
    updatedAt
    isTaken
    status
    name
    lore
    requirements {
      id
      name
      rank
      description
    }
    honorReward
    file {
      bucket
      region
      key
    }
    squad {
      id
      owner
      name
      createdAt
      open
    }
  }
}
`;
